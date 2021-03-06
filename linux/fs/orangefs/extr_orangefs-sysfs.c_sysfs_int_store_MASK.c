
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct orangefs_attribute {TYPE_1__ attr; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int EINVAL ;
 int GOSSIP_SYSFS_DEBUG ;
 int gossip_debug (int ,char*,int ,char const*) ;
 int kstrtoint (char const*,int ,int *) ;
 int op_timeout_secs ;
 int orangefs_cache_timeout_msecs ;
 int orangefs_dcache_timeout_msecs ;
 int orangefs_getattr_timeout_msecs ;
 int slot_timeout_secs ;
 int strcmp (int ,char*) ;

__attribute__((used)) static ssize_t sysfs_int_store(struct kobject *kobj,
    struct orangefs_attribute *attr, const char *buf, size_t count)
{
 int rc = 0;

 gossip_debug(GOSSIP_SYSFS_DEBUG,
       "sysfs_int_store: start attr->attr.name:%s: buf:%s:\n",
       attr->attr.name, buf);

 if (!strcmp(attr->attr.name, "op_timeout_secs")) {
  rc = kstrtoint(buf, 0, &op_timeout_secs);
  goto out;
 } else if (!strcmp(attr->attr.name, "slot_timeout_secs")) {
  rc = kstrtoint(buf, 0, &slot_timeout_secs);
  goto out;
 } else if (!strcmp(attr->attr.name, "cache_timeout_msecs")) {
  rc = kstrtoint(buf, 0, &orangefs_cache_timeout_msecs);
  goto out;
 } else if (!strcmp(attr->attr.name, "dcache_timeout_msecs")) {
  rc = kstrtoint(buf, 0, &orangefs_dcache_timeout_msecs);
  goto out;
 } else if (!strcmp(attr->attr.name, "getattr_timeout_msecs")) {
  rc = kstrtoint(buf, 0, &orangefs_getattr_timeout_msecs);
  goto out;
 } else {
  goto out;
 }

out:
 if (rc)
  rc = -EINVAL;
 else
  rc = count;

 return rc;
}

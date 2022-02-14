
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void adfs_discrecord ;
struct adfs_discmap {TYPE_1__* dm_bh; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;



__attribute__((used)) static inline
struct adfs_discrecord *FUNC_0(struct adfs_discmap *VAR_0)
{
 return (void *)(VAR_0[0].dm_bh->b_data + 4);
}

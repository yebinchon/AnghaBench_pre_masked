
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_nsegments; } ;
struct nilfs_segments_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct nilfs_segments_attr *VAR_1,
         struct the_nilfs *VAR_2,
         char *VAR_3)
{
 return FUNC_0(VAR_3, VAR_0, "%lu\n", VAR_2->ns_nsegments);
}

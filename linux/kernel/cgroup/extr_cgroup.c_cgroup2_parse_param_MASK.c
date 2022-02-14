
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_parse_result {int dummy; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {int dummy; } ;
struct cgroup_fs_context {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 struct cgroup_fs_context* FUNC_0 (struct fs_context*) ;
 int FUNC_1 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_4, struct fs_parameter *VAR_5)
{
 struct cgroup_fs_context *VAR_6 = FUNC_0(VAR_4);
 struct fs_parse_result VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, &VAR_3, VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_8) {
 case 128:
  VAR_6->flags |= VAR_1;
  return 0;
 case 129:
  VAR_6->flags |= VAR_0;
  return 0;
 }
 return -VAR_2;
}

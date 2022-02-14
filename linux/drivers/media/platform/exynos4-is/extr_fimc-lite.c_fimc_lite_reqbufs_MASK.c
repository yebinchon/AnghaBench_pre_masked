
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int count; } ;
struct fimc_lite {int reqbufs_count; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct file*,void*,struct v4l2_requestbuffers*) ;
 struct fimc_lite* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
        struct v4l2_requestbuffers *VAR_4)
{
 struct fimc_lite *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_4->count = FUNC_0(VAR_1, VAR_0, VAR_4->count);
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!VAR_6)
  VAR_5->reqbufs_count = VAR_4->count;

 return VAR_6;
}

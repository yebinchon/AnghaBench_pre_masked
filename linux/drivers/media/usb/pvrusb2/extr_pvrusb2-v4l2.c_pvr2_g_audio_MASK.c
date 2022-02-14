
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int capability; int name; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{

 VAR_3->index = 0;
 FUNC_0(VAR_3->name, "PVRUSB2 Audio", sizeof(VAR_3->name));
 VAR_3->capability = VAR_0;
 return 0;
}

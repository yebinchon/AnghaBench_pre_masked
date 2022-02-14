
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct sta2x11_vip {int decoder; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 struct sta2x11_vip* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct sta2x11_vip *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_5->decoder, VAR_1, VAR_0, VAR_4);
}

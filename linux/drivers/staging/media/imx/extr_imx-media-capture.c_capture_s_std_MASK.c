
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct capture_priv {int src_sd; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 struct capture_priv* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, v4l2_std_id VAR_5)
{
 struct capture_priv *VAR_6 = FUNC_2(VAR_3);

 if (FUNC_1(&VAR_6->q))
  return -VAR_0;

 return FUNC_0(VAR_6->src_sd, VAR_2, VAR_1, VAR_5);
}

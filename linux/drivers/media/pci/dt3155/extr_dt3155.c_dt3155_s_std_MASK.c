
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct dt3155_priv {int std; int width; int height; int csr2; int vidq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 struct dt3155_priv* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, v4l2_std_id VAR_6)
{
 struct dt3155_priv *VAR_7 = FUNC_1(VAR_4);

 if (VAR_7->std == VAR_6)
  return 0;
 if (FUNC_0(&VAR_7->vidq))
  return -VAR_0;
 VAR_7->std = VAR_6;
 if (VAR_7->std & VAR_1) {
  VAR_7->csr2 = VAR_3;
  VAR_7->width = 640;
  VAR_7->height = 480;
 } else {
  VAR_7->csr2 = VAR_2;
  VAR_7->width = 768;
  VAR_7->height = 576;
 }
 return 0;
}

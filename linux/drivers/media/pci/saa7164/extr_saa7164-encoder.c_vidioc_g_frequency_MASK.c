
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int dummy; } ;
struct saa7164_encoder_fh {int port; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int FUNC_0 (int ,struct v4l2_frequency*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
 struct v4l2_frequency *VAR_2)
{
 struct saa7164_encoder_fh *VAR_3 = VAR_0->private_data;

 return FUNC_0(VAR_3->port, VAR_2);
}

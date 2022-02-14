
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7164_vbi_fh {TYPE_1__* port; } ;
struct file {struct saa7164_vbi_fh* private_data; } ;
struct TYPE_2__ {int enc_port; } ;


 int FUNC_0 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct saa7164_vbi_fh *VAR_3 = VAR_0->private_data;

 return FUNC_0(VAR_3->port->enc_port, VAR_2);
}

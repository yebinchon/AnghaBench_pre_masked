
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_laptop {struct sabi_config* config; int * f0000_segment; int * sabi_iface; } ;
struct TYPE_2__ {int set_linux; } ;
struct sabi_config {TYPE_1__ commands; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct samsung_laptop*,int,int) ;

__attribute__((used)) static void FUNC_2(struct samsung_laptop *VAR_0)
{
 const struct sabi_config *VAR_1 = VAR_0->config;


 if (VAR_1 && VAR_1->commands.set_linux != 0xff)
  FUNC_1(VAR_0, VAR_1->commands.set_linux, 0x80);

 if (VAR_0->sabi_iface) {
  FUNC_0(VAR_0->sabi_iface);
  VAR_0->sabi_iface = ((void*)0);
 }
 if (VAR_0->f0000_segment) {
  FUNC_0(VAR_0->f0000_segment);
  VAR_0->f0000_segment = ((void*)0);
 }

 VAR_0->config = ((void*)0);
}

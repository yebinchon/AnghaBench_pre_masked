
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u_char ;
struct spk_synth {char procspeech; TYPE_1__* io_ops; } ;
struct TYPE_2__ {int (* synth_out ) (struct spk_synth*,char) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct spk_synth*,char) ;
 int FUNC_1 (int ) ;

const char *FUNC_2(struct spk_synth *VAR_1, const char *VAR_2)
{
 u_char VAR_3;

 while ((VAR_3 = *VAR_2)) {
  if (VAR_3 == '\n')
   VAR_3 = VAR_1->procspeech;
  if (FUNC_1(VAR_0) < 1 ||
      !VAR_1->io_ops->synth_out(VAR_1, VAR_3))
   return VAR_2;
  VAR_2++;
 }
 return ((void*)0);
}

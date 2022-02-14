
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rx_stream; } ;
struct ar9170 {TYPE_1__ fw; } ;


 int FUNC_0 (struct ar9170*,void*,unsigned int) ;
 int FUNC_1 (struct ar9170*,void*,unsigned int) ;

void FUNC_2(struct ar9170 *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 if (VAR_0->fw.rx_stream)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_bus {int host_pcmcia; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ssb_bus *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->host_pcmcia, VAR_2, VAR_3);
 if (FUNC_1(VAR_4 != 0))
  return -VAR_0;

 return 0;
}

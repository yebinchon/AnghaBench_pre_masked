
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radio_isa_card {int io; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct radio_isa_card *VAR_0)
{

 FUNC_1(0x90, VAR_0->io);
 FUNC_0(3000);
 FUNC_1(0xc0, VAR_0->io);
 return 0;
}

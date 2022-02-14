
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_info {unsigned int len; } ;
struct device {int dummy; } ;
struct TxDesc {int addr; int opts1; int opts2; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,unsigned int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, struct ring_info *VAR_2,
     struct TxDesc *VAR_3)
{
 unsigned int VAR_4 = VAR_2->len;

 FUNC_0(VAR_1, FUNC_1(VAR_3->addr), VAR_4, VAR_0);

 VAR_3->opts1 = 0x00;
 VAR_3->opts2 = 0x00;
 VAR_3->addr = 0x00;
 VAR_2->len = 0;
}

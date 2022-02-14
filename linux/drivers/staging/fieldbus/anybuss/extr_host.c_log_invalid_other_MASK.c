
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device {int dummy; } ;
struct anybus_mbox_hdr {int * extended; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
         struct anybus_mbox_hdr *VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_1->extended) - 1;
 u16 VAR_3 = FUNC_1(VAR_1->extended[VAR_2]);

 FUNC_2(VAR_0, "   Invalid other: [0x%02X]", VAR_3);
}

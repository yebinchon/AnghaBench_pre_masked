
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar5523_cmd_rx_filter {void* op; void* bits; } ;
struct ar5523 {int dummy; } ;
typedef int rxfilter ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_rx_filter*,int,int ) ;
 int FUNC_1 (struct ar5523*,char*,int ,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct ar5523_cmd_rx_filter VAR_4;

 VAR_4.bits = FUNC_2(VAR_2);
 VAR_4.op = FUNC_2(VAR_3);

 FUNC_1(VAR_1, "setting Rx filter=0x%x flags=0x%x\n", VAR_2, VAR_3);
 return FUNC_0(VAR_1, VAR_0, &VAR_4,
     sizeof(VAR_4), 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct board_info {int io_data; int io_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static u8
FUNC_2(struct board_info *VAR_0, int VAR_1)
{
 FUNC_1(VAR_1, VAR_0->io_addr);
 return FUNC_0(VAR_0->io_data);
}

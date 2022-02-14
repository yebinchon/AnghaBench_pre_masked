
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fpga_internal {int (* fpga_rw ) (int ,int ,int,int) ;int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct fpga_internal *VAR_1, int VAR_2,
       u8 VAR_3, u8 VAR_4)
{
 VAR_1->fpga_rw(VAR_1->dev, VAR_0, VAR_2, 0);
 return VAR_1->fpga_rw(VAR_1->dev, 0, VAR_3, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc {int dummy; } ;
struct sdio_cmd52 {int address; int data; scalar_t__ raw; scalar_t__ function; scalar_t__ read_write; } ;


 int FUNC_0 (struct wilc*,struct sdio_cmd52*) ;

__attribute__((used)) static int FUNC_1(struct wilc *VAR_0, u32 *VAR_1)
{
 u32 VAR_2;
 struct sdio_cmd52 VAR_3;




 VAR_3.read_write = 0;
 VAR_3.function = 0;
 VAR_3.raw = 0;
 VAR_3.address = 0xf2;
 VAR_3.data = 0;
 FUNC_0(VAR_0, &VAR_3);
 VAR_2 = VAR_3.data;

 VAR_3.address = 0xf3;
 VAR_3.data = 0;
 FUNC_0(VAR_0, &VAR_3);
 VAR_2 |= (VAR_3.data << 8);

 *VAR_1 = VAR_2;
 return 1;
}

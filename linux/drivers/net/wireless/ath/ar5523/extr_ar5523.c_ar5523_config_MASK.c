
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar5523_write_mac {scalar_t__ data; void* len; void* reg; } ;
struct ar5523 {int dummy; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_write_mac*,int,int ) ;
 int FUNC_1 (struct ar5523*,char*,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct ar5523_write_mac VAR_4;
 int VAR_5;

 VAR_4.reg = FUNC_2(VAR_2);
 VAR_4.len = FUNC_2(0);
 *(__be32 *)VAR_4.data = FUNC_2(VAR_3);

 VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_4,
     3 * sizeof(u32), 0);
 if (VAR_5 != 0)
  FUNC_1(VAR_1, "could not write register 0x%02x\n", VAR_2);
 return VAR_5;
}

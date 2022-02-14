
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar5523_write_mac {int data; void* len; void* reg; } ;
struct ar5523 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_write_mac*,int,int ) ;
 int FUNC_1 (struct ar5523*,char*,int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,void const*,int) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_1, u32 VAR_2, const void *VAR_3,
          int VAR_4)
{
 struct ar5523_write_mac VAR_5;
 int VAR_6;

 VAR_5.reg = FUNC_2(VAR_2);
 VAR_5.len = FUNC_2(VAR_4);
 FUNC_3(VAR_5.data, VAR_3, VAR_4);


 VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5,
     (VAR_4 == 0) ? sizeof(u32) : 2 * sizeof(u32) + VAR_4, 0);
 if (VAR_6 != 0)
  FUNC_1(VAR_1, "could not write %d bytes to register 0x%02x\n",
      VAR_4, VAR_2);
 return VAR_6;
}

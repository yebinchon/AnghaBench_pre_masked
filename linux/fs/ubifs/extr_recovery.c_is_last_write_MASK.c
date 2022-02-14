
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubifs_info {int leb_size; int max_write_size; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(const struct ubifs_info *VAR_0, void *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 uint8_t *VAR_5;





 VAR_3 = FUNC_0(VAR_2 + 1, VAR_0->max_write_size);
 VAR_4 = VAR_0->leb_size - VAR_3;
 VAR_5 = VAR_1 + VAR_3 - VAR_2;
 return FUNC_1(VAR_5, VAR_4);
}

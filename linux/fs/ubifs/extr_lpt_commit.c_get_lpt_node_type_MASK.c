
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubifs_info {int pcnt_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info const*,int **,int*,int ) ;

__attribute__((used)) static int FUNC_1(const struct ubifs_info *VAR_2, uint8_t *VAR_3,
        int *VAR_4)
{
 uint8_t *VAR_5 = VAR_3 + VAR_0;
 int VAR_6 = 0, VAR_7;

 VAR_7 = FUNC_0(VAR_2, &VAR_5, &VAR_6, VAR_1);
 *VAR_4 = FUNC_0(VAR_2, &VAR_5, &VAR_6, VAR_2->pcnt_bits);
 return VAR_7;
}

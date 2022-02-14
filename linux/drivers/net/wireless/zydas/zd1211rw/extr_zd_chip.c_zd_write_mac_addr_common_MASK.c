
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef struct zd_ioreq32 {int value; } const zd_ioreq32 ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (struct zd_ioreq32 const*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zd_chip*) ;
 int FUNC_5 (struct zd_chip*,struct zd_ioreq32 const*,int ) ;

__attribute__((used)) static int FUNC_6(struct zd_chip *VAR_0, const u8 *VAR_1,
        const struct zd_ioreq32 *VAR_2,
        const char *VAR_3)
{
 int VAR_4;
 struct zd_ioreq32 VAR_5[2] = {VAR_2[0], VAR_2[1]};

 if (VAR_1) {
  VAR_5[0].value = (VAR_1[3] << 24)
         | (VAR_1[2] << 16)
         | (VAR_1[1] << 8)
         | VAR_1[0];
  VAR_5[1].value = (VAR_1[5] << 8)
         | VAR_1[4];
  FUNC_1(FUNC_4(VAR_0), "%s addr %pM\n", VAR_3, VAR_1);
 } else {
  FUNC_1(FUNC_4(VAR_0), "set NULL %s\n", VAR_3);
 }

 FUNC_2(&VAR_0->mutex);
 VAR_4 = FUNC_5(VAR_0, VAR_5, FUNC_0(VAR_5));
 FUNC_3(&VAR_0->mutex);
 return VAR_4;
}

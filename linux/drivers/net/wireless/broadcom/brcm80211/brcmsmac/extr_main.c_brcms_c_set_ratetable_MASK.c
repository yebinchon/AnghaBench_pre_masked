
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct brcms_c_rateset {size_t count; int* rates; } ;
struct brcms_c_info {TYPE_1__* stf; } ;
struct TYPE_2__ {int txstreams; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_c_info*,int) ;
 int FUNC_1 (struct brcms_c_rateset const*,struct brcms_c_rateset*) ;
 struct brcms_c_rateset* FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_rateset*,int ) ;
 int FUNC_4 (struct brcms_c_info*,int,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_c_info *VAR_1)
{
 const struct brcms_c_rateset *VAR_2;
 struct brcms_c_rateset VAR_3;
 u8 VAR_4, VAR_5;
 uint VAR_6;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, &VAR_3);
 FUNC_3(&VAR_3, VAR_1->stf->txstreams);


 for (VAR_6 = 0; VAR_6 < VAR_3.count; VAR_6++) {
  VAR_4 = VAR_3.rates[VAR_6] & VAR_0;




  VAR_5 = FUNC_0(VAR_1, VAR_4);
  if (VAR_5 == 0)



   VAR_5 = VAR_3.rates[0] & VAR_0;

  FUNC_4(VAR_1, VAR_4, VAR_5);
 }
}

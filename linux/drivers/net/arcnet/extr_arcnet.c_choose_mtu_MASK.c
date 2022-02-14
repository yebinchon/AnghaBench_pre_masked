
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtu; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_3, VAR_4 = 65535;


 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  if (VAR_1[VAR_3] != &VAR_2 &&
      VAR_1[VAR_3]->mtu < VAR_4) {
   VAR_4 = VAR_1[VAR_3]->mtu;
  }
 }

 return VAR_4 == 65535 ? VAR_0 : VAR_4;
}

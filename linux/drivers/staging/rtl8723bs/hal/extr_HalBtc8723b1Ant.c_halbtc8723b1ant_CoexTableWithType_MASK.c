
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int nCoexTableType; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int,int,int,int,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_3, bool VAR_4, u8 VAR_5
)
{
 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], ********** CoexTable(%d) **********\n", VAR_5)
 );

 VAR_2->nCoexTableType = VAR_5;

 switch (VAR_5) {
 case 0:
  FUNC_1(
   VAR_3, VAR_4, 0x55555555, 0x55555555, 0xffffff, 0x3
  );
  break;
 case 1:
  FUNC_1(
   VAR_3, VAR_4, 0x55555555, 0x5a5a5a5a, 0xffffff, 0x3
  );
  break;
 case 2:
  FUNC_1(
   VAR_3, VAR_4, 0x5a5a5a5a, 0x5a5a5a5a, 0xffffff, 0x3
  );
  break;
 case 3:
  FUNC_1(
   VAR_3, VAR_4, 0xaaaa5555, 0xaaaa5a5a, 0xffffff, 0x3
  );
  break;
 case 4:
  FUNC_1(
   VAR_3, VAR_4, 0x55555555, 0xaaaa5a5a, 0xffffff, 0x3
  );
  break;
 case 5:
  FUNC_1(
   VAR_3, VAR_4, 0x5a5a5a5a, 0xaaaa5a5a, 0xffffff, 0x3
  );
  break;
 case 6:
  FUNC_1(
   VAR_3, VAR_4, 0x55555555, 0xaaaaaaaa, 0xffffff, 0x3
  );
  break;
 case 7:
  FUNC_1(
   VAR_3, VAR_4, 0xaaaaaaaa, 0xaaaaaaaa, 0xffffff, 0x3
  );
  break;
 default:
  break;
 }
}

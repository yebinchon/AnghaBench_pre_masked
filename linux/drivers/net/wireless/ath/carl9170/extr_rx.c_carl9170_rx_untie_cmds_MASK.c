
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ len; int seq; } ;
struct carl9170_rsp {TYPE_1__ hdr; } ;
struct ar9170 {TYPE_2__* hw; } ;
struct TYPE_4__ {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ar9170*,int ) ;
 int FUNC_1 (struct ar9170*,struct carl9170_rsp*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int const*,unsigned int const) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct ar9170 *VAR_1, const u8 *VAR_2,
       const unsigned int VAR_3)
{
 struct carl9170_rsp *VAR_4;
 int VAR_5 = 0;

 while (VAR_5 < VAR_3) {
  VAR_4 = (void *) &VAR_2[VAR_5];

  VAR_5 += VAR_4->hdr.len + 4;
  if (FUNC_4(VAR_5 > VAR_3))
   break;

  if (FUNC_0(VAR_1, VAR_4->hdr.seq))
   break;

  FUNC_1(VAR_1, VAR_4, VAR_4->hdr.len + 4);
 }

 if (FUNC_4(VAR_5 != VAR_3)) {
  if (!FUNC_2())
   return;

  FUNC_5(VAR_1->hw->wiphy, "malformed firmware trap:\n");
  FUNC_3("rxcmd:", VAR_0,
         VAR_2, VAR_3);
 }
}

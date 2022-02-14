
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int portno; scalar_t__ lan_type; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct lcs_card*) ;
 int FUNC_2 (struct lcs_card*,int ) ;
 int FUNC_3 (struct lcs_card*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct lcs_card *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(2, VAR_3, "startlan");
 VAR_5 = 0;
 if (VAR_4->portno != VAR_2) {
  if (VAR_4->lan_type == VAR_0)
   VAR_5 = FUNC_3(VAR_4);
  else
   VAR_5 = FUNC_2(VAR_4, VAR_1);
 } else {
                for (VAR_6 = 0; VAR_6 <= 16; VAR_6++) {
                        VAR_4->portno = VAR_6;
                        if (VAR_4->lan_type != VAR_0)
                                VAR_5 = FUNC_2(VAR_4,
                                                       VAR_1);
                        else

                                VAR_5 = FUNC_3(VAR_4);
                        if (VAR_5 == 0)
                                break;
                }
        }
 if (VAR_5 == 0)
  return FUNC_1(VAR_4);
 return VAR_5;
}

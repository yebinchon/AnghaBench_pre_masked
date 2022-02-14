
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {scalar_t__ nRetry; int state; int tmr; scalar_t__ bcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct r3964_info*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct r3964_info*,int ) ;
 int FUNC_4 (struct r3964_info*,int ) ;
 int FUNC_5 (struct r3964_info*) ;

__attribute__((used)) static void FUNC_6(struct r3964_info *VAR_8)
{
 if (VAR_8->nRetry < VAR_2) {
  FUNC_0("transmission failed. Retry #%d", VAR_8->nRetry);
  VAR_8->bcc = 0;
  FUNC_3(VAR_8, VAR_6);
  FUNC_1(VAR_8);
  VAR_8->state = VAR_5;
  VAR_8->nRetry++;
  FUNC_2(&VAR_8->tmr, VAR_7 + VAR_3);
 } else {
  FUNC_0("transmission failed after %d retries",
    VAR_2);

  FUNC_4(VAR_8, VAR_4);

  FUNC_3(VAR_8, VAR_0);
  FUNC_1(VAR_8);
  VAR_8->state = VAR_1;

  FUNC_5(VAR_8);
 }
}

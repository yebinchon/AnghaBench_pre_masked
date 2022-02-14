
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp {scalar_t__ rev; int host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct esp*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct esp *VAR_5)
{
 FUNC_1(VAR_5, VAR_1);
 if (VAR_5->rev == VAR_0) {
  int VAR_6 = 1000;

  while (FUNC_0(VAR_2) & VAR_3) {
   if (--VAR_6 == 0) {
    FUNC_2(VAR_4, VAR_5->host,
          "ESP_FF_BYTES will not clear!\n");
    break;
   }
   FUNC_3(1);
  }
 }
}

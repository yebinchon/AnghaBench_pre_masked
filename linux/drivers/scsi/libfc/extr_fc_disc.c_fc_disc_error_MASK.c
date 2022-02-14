
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int e_d_tov; } ;
struct fc_frame {int dummy; } ;
struct fc_disc {scalar_t__ retry_count; scalar_t__ pending; int disc_work; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_disc*,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_disc*,int ) ;
 struct fc_lport* FUNC_3 (struct fc_disc*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct fc_disc *VAR_5, struct fc_frame *VAR_6)
{
 struct fc_lport *VAR_7 = FUNC_3(VAR_5);
 unsigned long VAR_8 = 0;

 FUNC_0(VAR_5, "Error %ld, retries %d/%d\n",
      FUNC_1(VAR_6), VAR_5->retry_count,
      VAR_2);

 if (!VAR_6 || FUNC_1(VAR_6) == -VAR_4) {




  if (VAR_5->retry_count < VAR_2) {

   if (!VAR_6)
    VAR_8 = FUNC_4(VAR_1);
   else {
    VAR_8 = FUNC_4(VAR_7->e_d_tov);


    if (!VAR_5->retry_count)
     VAR_8 /= 4;
   }
   VAR_5->retry_count++;
   FUNC_5(&VAR_5->disc_work, VAR_8);
  } else
   FUNC_2(VAR_5, VAR_0);
 } else if (FUNC_1(VAR_6) == -VAR_3) {





  VAR_5->pending = 0;
 }
}

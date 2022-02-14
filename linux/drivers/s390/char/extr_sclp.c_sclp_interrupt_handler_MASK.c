
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sclp_req {int callback_data; int (* callback ) (struct sclp_req*,int ) ;int status; int list; } ;
struct ext_code {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sclp_req* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sclp_req*,int ) ;

__attribute__((used)) static void FUNC_9(struct ext_code VAR_9,
       unsigned int VAR_10, unsigned long VAR_11)
{
 struct sclp_req *VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 FUNC_3(VAR_0);
 FUNC_6(&VAR_4);
 VAR_13 = VAR_10 & 0xfffffff8;
 VAR_14 = VAR_10 & 0x3;
 if (VAR_13) {
  FUNC_2(&VAR_5);
  VAR_6 = VAR_8;
  VAR_12 = FUNC_0(VAR_13);
  if (VAR_12) {

   FUNC_4(&VAR_12->list);
   VAR_12->status = VAR_1;
   if (VAR_12->callback) {
    FUNC_7(&VAR_4);
    VAR_12->callback(VAR_12, VAR_12->callback_data);
    FUNC_6(&VAR_4);
   }
  }
  VAR_6 = VAR_7;
 }
 if (VAR_14 &&
     VAR_2 == VAR_3)
  FUNC_1();
 FUNC_7(&VAR_4);
 FUNC_5();
}

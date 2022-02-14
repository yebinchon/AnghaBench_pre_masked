
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pulse8 {int dummy; } ;
struct cec_msg {int len; int * msg; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pulse8* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct cec_msg*) ;
 int FUNC_2 (struct pulse8*,int *,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_5, u8 VAR_6,
        u32 VAR_7, struct cec_msg *VAR_8)
{
 struct pulse8 *VAR_9 = FUNC_0(VAR_5);
 u8 VAR_10[2];
 unsigned int VAR_11;
 int VAR_12;

 VAR_10[0] = VAR_4;
 VAR_10[1] = VAR_7;
 VAR_12 = FUNC_2(VAR_9, VAR_10, 2,
       VAR_0, 1);
 VAR_10[0] = VAR_2;
 VAR_10[1] = FUNC_1(VAR_8);
 if (!VAR_12)
  VAR_12 = FUNC_2(VAR_9, VAR_10, 2,
        VAR_0, 1);
 VAR_10[0] = VAR_8->len == 1 ? VAR_3 : VAR_1;
 VAR_10[1] = VAR_8->msg[0];
 if (!VAR_12)
  VAR_12 = FUNC_2(VAR_9, VAR_10, 2,
        VAR_0, 1);
 if (!VAR_12 && VAR_8->len > 1) {
  VAR_10[0] = VAR_8->len == 2 ? VAR_3 :
      VAR_1;
  VAR_10[1] = VAR_8->msg[1];
  VAR_12 = FUNC_2(VAR_9, VAR_10, 2,
        VAR_0, 1);
  for (VAR_11 = 0; !VAR_12 && VAR_11 + 2 < VAR_8->len; VAR_11++) {
   VAR_10[0] = (VAR_11 + 2 == VAR_8->len - 1) ?
    VAR_3 : VAR_1;
   VAR_10[1] = VAR_8->msg[VAR_11 + 2];
   VAR_12 = FUNC_2(VAR_9, VAR_10, 2,
         VAR_0, 1);
  }
 }

 return VAR_12;
}

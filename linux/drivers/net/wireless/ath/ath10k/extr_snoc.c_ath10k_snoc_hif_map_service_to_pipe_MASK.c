
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct service_to_pipe {int pipenum; int pipedir; int service_id; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct service_to_pipe*) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct service_to_pipe* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_3,
            u16 VAR_4,
            u8 *VAR_5, u8 *VAR_6)
{
 const struct service_to_pipe *VAR_7;
 bool VAR_8 = 0, VAR_9 = 0;
 int VAR_10;

 FUNC_3(VAR_3, VAR_0, "snoc hif map service\n");

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  VAR_7 = &VAR_2[VAR_10];

  if (FUNC_2(VAR_7->service_id) != VAR_4)
   continue;

  switch (FUNC_2(VAR_7->pipedir)) {
  case 129:
   break;
  case 131:
   FUNC_1(VAR_9);
   *VAR_6 = FUNC_2(VAR_7->pipenum);
   VAR_9 = 1;
   break;
  case 128:
   FUNC_1(VAR_8);
   *VAR_5 = FUNC_2(VAR_7->pipenum);
   VAR_8 = 1;
   break;
  case 130:
   FUNC_1(VAR_9);
   FUNC_1(VAR_8);
   *VAR_6 = FUNC_2(VAR_7->pipenum);
   *VAR_5 = FUNC_2(VAR_7->pipenum);
   VAR_9 = 1;
   VAR_8 = 1;
   break;
  }
 }

 if (!VAR_8 || !VAR_9)
  return -VAR_1;

 return 0;
}

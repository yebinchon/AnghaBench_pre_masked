
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_req {int status; int start_count; int sccb; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct sclp_req *VAR_12)
{
 int VAR_13;

 if (VAR_9 != VAR_10)
  return 0;
 FUNC_1(&VAR_8);
 VAR_13 = FUNC_2(VAR_12->command, VAR_12->sccb);
 VAR_12->start_count++;

 if (VAR_13 == 0) {

  VAR_12->status = VAR_4;
  VAR_9 = VAR_11;
  FUNC_0(VAR_5 * VAR_1,
      VAR_7);
  return 0;
 } else if (VAR_13 == -VAR_0) {

  FUNC_0(VAR_2 * VAR_1,
      VAR_6);
  return 0;
 }

 VAR_12->status = VAR_3;
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int response_code; } ;
struct init_sccb {TYPE_1__ header; } ;
struct TYPE_4__ {scalar_t__ status; int command; scalar_t__ sccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,struct init_sccb*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(void)
{
 struct init_sccb *VAR_17;
 unsigned long VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_8(&VAR_12, VAR_18);

 VAR_20 = FUNC_5(VAR_2, VAR_9);
 if (VAR_20) {
  FUNC_9(&VAR_12, VAR_18);
  return VAR_20;
 }
 for (VAR_19 = 0; VAR_19 <= VAR_5; VAR_19++) {
  FUNC_0(0, 0);
  VAR_17 = (struct init_sccb *) VAR_11.sccb;
  VAR_20 = FUNC_6(VAR_11.command, VAR_17);
  if (VAR_20 == -VAR_1)
   break;
  VAR_11.status = VAR_7;
  VAR_15 = VAR_16;
  FUNC_1(VAR_8 * VAR_3,
      VAR_10);
  FUNC_9(&VAR_12, VAR_18);


  FUNC_3(VAR_4);

  FUNC_7();


  FUNC_4(VAR_4);
  FUNC_8(&VAR_12, VAR_18);
  FUNC_2(&VAR_14);
  VAR_20 = -VAR_0;
  if (VAR_11.status == VAR_6) {
   if (VAR_17->header.response_code == 0x20) {
    VAR_20 = 0;
    break;
   } else if (VAR_17->header.response_code == 0x74f0) {
    if (!VAR_13) {
     VAR_13 = 1;
     VAR_19 = 0;
    }
   }
  }
 }
 FUNC_10(VAR_2, VAR_9);
 FUNC_9(&VAR_12, VAR_18);
 return VAR_20;
}

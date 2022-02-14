
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu {int dummy; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rvu*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rvu*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rvu *VAR_3, struct msg_req *VAR_4,
       struct msg_rsp *VAR_5)
{
 u16 VAR_6 = VAR_4->hdr.pcifunc;
 u16 VAR_7, VAR_8;
 u64 VAR_9;

 VAR_7 = VAR_6 & VAR_2;
 VAR_9 = FUNC_3(VAR_3, VAR_0,
    FUNC_0(FUNC_2(VAR_6)));
 VAR_8 = (VAR_9 >> 12) & 0xFF;

 if (VAR_7 && VAR_7 <= VAR_8)
  FUNC_1(VAR_3, VAR_6);
 else
  return VAR_1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rvu*,int ,int ) ;
 int FUNC_3 (struct rvu*,int *,int ,int ) ;
 int FUNC_4 (struct rvu*,int,int ) ;
 int FUNC_5 (struct rvu*,int,int ,int ) ;

int FUNC_6(struct rvu *VAR_3, struct msg_req *VAR_4,
       struct msg_rsp *VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_3->hw;
 u16 VAR_7 = VAR_4->hdr.pcifunc;
 int VAR_8, VAR_9, VAR_10;
 u64 VAR_11;

 VAR_10 = FUNC_2(VAR_3, VAR_0, VAR_7);
 if (VAR_10 < 0)
  return VAR_2;

 VAR_9 = FUNC_3(VAR_3, &VAR_6->block[VAR_10], VAR_7, 0);
 if (VAR_9 < 0)
  return VAR_2;


 VAR_11 = FUNC_4(VAR_3, VAR_10, VAR_1);


 for (VAR_8 = 0; VAR_8 < ((VAR_11 >> 24) & 0xFF); VAR_8++)
  FUNC_5(VAR_3, VAR_10, FUNC_1(VAR_9, VAR_8), 0);


 for (VAR_8 = 0; VAR_8 < ((VAR_11 >> 32) & 0xFF); VAR_8++)
  FUNC_5(VAR_3, VAR_10, FUNC_0(VAR_9, VAR_8), 0);

 return 0;
}

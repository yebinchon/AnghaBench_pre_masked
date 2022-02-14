
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct us_data {unsigned int send_bulk_pipe; unsigned int recv_bulk_pipe; int fflags; int * srb; scalar_t__ iobuf; } ;
struct bulk_cs_wrap {unsigned int DataTransferLength; scalar_t__ Status; int Residue; } ;
struct bulk_cb_wrap {unsigned int DataTransferLength; scalar_t__ Status; int Residue; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct us_data*,unsigned int,int *) ;
 int FUNC_6 (struct us_data*,unsigned int,struct bulk_cs_wrap*,int ,unsigned int*) ;
 int FUNC_7 (struct us_data*,unsigned int,void*,unsigned int,int ,unsigned int*) ;
 int FUNC_8 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_10, u8 VAR_11, void *VAR_12, int VAR_13)
{
 struct bulk_cb_wrap *VAR_14 = (struct bulk_cb_wrap *) VAR_10->iobuf;
 struct bulk_cs_wrap *VAR_15 = (struct bulk_cs_wrap *) VAR_10->iobuf;

 int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18 = 0, VAR_19 = 0;
 unsigned int VAR_20 = VAR_14->DataTransferLength;



 VAR_16 = FUNC_6(VAR_10, VAR_10->send_bulk_pipe,
         VAR_14, VAR_6, ((void*)0));
 if (VAR_16 != VAR_3) {
  FUNC_8(VAR_10, "send cmd to out endpoint fail ---\n");
  return VAR_1;
 }

 if (VAR_12) {
  unsigned int VAR_21 = VAR_11;

  if (VAR_11 == VAR_0)
   VAR_21 = VAR_10->recv_bulk_pipe;
  else
   VAR_21 = VAR_10->send_bulk_pipe;


  if (VAR_13) {
   VAR_16 = FUNC_5(VAR_10, VAR_21, VAR_10->srb);
  } else {
   VAR_16 = FUNC_7(VAR_10, VAR_21, VAR_12,
      VAR_20, 0, &VAR_19);
  }
  if (VAR_16 != VAR_3) {
   FUNC_8(VAR_10, "data transfer fail ---\n");
   return VAR_1;
  }
 }


 VAR_16 = FUNC_6(VAR_10, VAR_10->recv_bulk_pipe, VAR_15,
         VAR_7, &VAR_18);

 if (VAR_16 == VAR_4 && VAR_18 == 0) {
  FUNC_8(VAR_10, "Received 0-length CSW; retrying...\n");
  VAR_16 = FUNC_6(VAR_10, VAR_10->recv_bulk_pipe,
         VAR_15, VAR_7, &VAR_18);
 }

 if (VAR_16 == VAR_5) {

  FUNC_8(VAR_10, "Attempting to get CSW (2nd try)...\n");
  VAR_16 = FUNC_6(VAR_10, VAR_10->recv_bulk_pipe,
      VAR_15, VAR_7, ((void*)0));
 }

 if (VAR_16 != VAR_3)
  return VAR_1;


 VAR_17 = FUNC_0(VAR_15->Residue);





 if (VAR_17 && !(VAR_10->fflags & VAR_9)) {
  VAR_17 = FUNC_2(VAR_17, VAR_20);
  if (VAR_10->srb != ((void*)0))
   FUNC_4(VAR_10->srb, FUNC_1(FUNC_3(VAR_10->srb),
        (int)VAR_17));
 }

 if (VAR_15->Status != VAR_8)
  return VAR_1;

 return VAR_2;
}

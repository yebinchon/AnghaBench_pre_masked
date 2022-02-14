
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int mpi_mutex; int ndev; } ;
struct mbox_params {scalar_t__* mbox_in; int* mbox_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_3 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_4 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_5 (struct ql_adapter*) ;
 int FUNC_6 (struct ql_adapter*,int ,int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ql_adapter *VAR_13, struct mbox_params *VAR_14)
{
 int VAR_15;
 unsigned long VAR_16;

 FUNC_0(&VAR_13->mpi_mutex);


 FUNC_6(VAR_13, VAR_5, (VAR_6 << 16));


 VAR_15 = FUNC_3(VAR_13, VAR_14);
 if (VAR_15)
  goto end;





 if (VAR_14->mbox_in[0] == VAR_8)
  goto end;






 VAR_16 = VAR_12 + VAR_4 * VAR_7;
 do {

  VAR_15 = FUNC_5(VAR_13);
  if (VAR_15)
   continue;






  VAR_15 = FUNC_4(VAR_13, VAR_14);
  if (VAR_15)
   goto end;





  if (((VAR_14->mbox_out[0] & 0x0000f000) ==
     VAR_9) ||
   ((VAR_14->mbox_out[0] & 0x0000f000) ==
     VAR_10))
   goto done;
 } while (FUNC_7(VAR_12, VAR_16));

 FUNC_2(VAR_13, VAR_11, VAR_13->ndev,
    "Timed out waiting for mailbox complete.\n");
 VAR_15 = -VAR_3;
 goto end;

done:




 FUNC_6(VAR_13, VAR_0, VAR_1);

 if (((VAR_14->mbox_out[0] & 0x0000f000) !=
     VAR_9) &&
  ((VAR_14->mbox_out[0] & 0x0000f000) !=
     VAR_10)) {
  VAR_15 = -VAR_2;
 }
end:

 FUNC_6(VAR_13, VAR_5, (VAR_6 << 16) | VAR_6);
 FUNC_1(&VAR_13->mpi_mutex);
 return VAR_15;
}

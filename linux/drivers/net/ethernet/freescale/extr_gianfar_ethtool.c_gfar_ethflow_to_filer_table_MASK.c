
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfar_private {unsigned int* ftp_rqfpr; unsigned int* ftp_rqfcr; int cur_filer_idx; int ndev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;




 int FUNC_0 (struct gfar_private*,int) ;
 int FUNC_1 (struct gfar_private*,int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int*) ;
 unsigned int* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct gfar_private *VAR_13, u64 VAR_14,
           u64 VAR_15)
{
 unsigned int VAR_16;
 unsigned int *VAR_17;
 unsigned int *VAR_18;
 int VAR_19 = 0x0, VAR_20 = 0x0;
 int VAR_21 = VAR_2, VAR_22 = 0x0;
 int VAR_23 = 1;

 VAR_17 = FUNC_3(VAR_2 + 1, sizeof(unsigned int),
        VAR_1);
 VAR_18 = FUNC_3(VAR_2 + 1, sizeof(unsigned int),
        VAR_1);
 if (!VAR_17 || !VAR_18) {
  VAR_23 = 0;
  goto err;
 }

 switch (VAR_15) {
 case 131:
  VAR_16 = VAR_9 |VAR_11;
  break;
 case 129:
  VAR_16 = VAR_9 |VAR_12;
  break;
 case 130:
  VAR_16 = VAR_10 |VAR_11;
  break;
 case 128:
  VAR_16 = VAR_10 |VAR_12;
  break;
 default:
  FUNC_4(VAR_13->ndev,
      "Right now this class is not supported\n");
  VAR_23 = 0;
  goto err;
 }

 for (VAR_19 = 0; VAR_19 < VAR_2 + 1; VAR_19++) {
  VAR_17[VAR_21] = VAR_13->ftp_rqfpr[VAR_19];
  VAR_18[VAR_21] = VAR_13->ftp_rqfcr[VAR_19];
  VAR_21--;
  if ((VAR_13->ftp_rqfcr[VAR_19] ==
       (VAR_8 | VAR_4 | VAR_3)) &&
      (VAR_13->ftp_rqfpr[VAR_19] == VAR_16))
   break;
 }

 if (VAR_19 == VAR_2 + 1) {
  FUNC_4(VAR_13->ndev,
      "No parse rule found, can't create hash rules\n");
  VAR_23 = 0;
  goto err;
 }




 for (VAR_22 = VAR_19+1; VAR_22 < VAR_2; VAR_22++) {
  if ((VAR_13->ftp_rqfcr[VAR_22] & VAR_4) &&
      !(VAR_13->ftp_rqfcr[VAR_22] & VAR_3)) {
   VAR_13->ftp_rqfcr[VAR_22] = VAR_4 | VAR_5 |
          VAR_6 | VAR_7;
   VAR_13->ftp_rqfpr[VAR_22] = VAR_0;
   FUNC_1(VAR_13, VAR_22, VAR_13->ftp_rqfcr[VAR_22],
      VAR_13->ftp_rqfpr[VAR_22]);
   break;
  }

  if (!(VAR_13->ftp_rqfcr[VAR_22] & VAR_4) &&
   (VAR_13->ftp_rqfcr[VAR_22] & VAR_3))
   continue;
  else {
   VAR_17[VAR_21] = VAR_13->ftp_rqfpr[VAR_22];
   VAR_18[VAR_21] = VAR_13->ftp_rqfcr[VAR_22];
   VAR_21--;
  }
 }

 VAR_13->cur_filer_idx = VAR_22 - 1;


 FUNC_0(VAR_13, VAR_14);


 for (VAR_20 = VAR_21+1; VAR_20 < VAR_2; VAR_20++) {
  VAR_13->ftp_rqfpr[VAR_13->cur_filer_idx] = VAR_17[VAR_20];
  VAR_13->ftp_rqfcr[VAR_13->cur_filer_idx] = VAR_18[VAR_20];
  FUNC_1(VAR_13, VAR_13->cur_filer_idx,
     VAR_18[VAR_20], VAR_17[VAR_20]);
  if (!VAR_13->cur_filer_idx)
   break;
  VAR_13->cur_filer_idx = VAR_13->cur_filer_idx - 1;
 }

err:
 FUNC_2(VAR_18);
 FUNC_2(VAR_17);
 return VAR_23;
}

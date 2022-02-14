
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {scalar_t__ fast; scalar_t__ chip710; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Scsi_Host*,int ) ;
 int FUNC_1 (struct Scsi_Host*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int,unsigned int) ;

__attribute__((used)) static inline int
FUNC_3 (struct Scsi_Host *VAR_9) {
 struct NCR_700_Host_Parameters *VAR_10 =
  (struct NCR_700_Host_Parameters *)VAR_9->hostdata[0];
 int VAR_11, VAR_12 = 0;
 unsigned int VAR_13;

 if(VAR_10->chip710) {
  VAR_11 = ((FUNC_0(VAR_9, VAR_2) & 0x7f) -
    (FUNC_1(VAR_9, VAR_1) & 0x7f)) & 0x7f;
 } else {
  VAR_11 = ((FUNC_0(VAR_9, VAR_2) & 0x3f) -
    (FUNC_1(VAR_9, VAR_1) & 0x3f)) & 0x3f;
 }

 if(VAR_10->fast)
  VAR_12 = FUNC_0(VAR_9, VAR_8) & 0x0f;


 VAR_13 = FUNC_0(VAR_9, VAR_0) & 0x01;

 if (VAR_13) {

  if (VAR_12)
   VAR_11 += (FUNC_0(VAR_9, VAR_7) & 0xf0) >> 4;
  else
   if (FUNC_0(VAR_9, VAR_6) & VAR_3)
    ++VAR_11;
 } else {

  __u8 VAR_14 = FUNC_0(VAR_9, VAR_6);
  if (VAR_14 & VAR_4)
   ++VAR_11;
  if (VAR_12 && (VAR_14 & VAR_5))
   ++VAR_11;
 }




 return VAR_11;
}

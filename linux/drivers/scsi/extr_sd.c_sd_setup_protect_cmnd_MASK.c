
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int prot_flags; TYPE_1__* request; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct bio* bio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_3 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned char FUNC_6(struct scsi_cmnd *VAR_9,
        unsigned int VAR_10, unsigned int VAR_11)
{
 struct bio *VAR_12 = VAR_9->request->bio;
 unsigned int VAR_13 = FUNC_5(FUNC_1(VAR_9->request), VAR_10, VAR_11);
 unsigned int VAR_14 = 0;

 if (VAR_10) {
  if (FUNC_0(VAR_12, VAR_2))
   VAR_9->prot_flags |= VAR_4;

  if (FUNC_0(VAR_12, VAR_0) == 0)
   VAR_9->prot_flags |= VAR_3;
 }

 if (VAR_11 != VAR_8) {
  VAR_9->prot_flags |= VAR_6;

  if (FUNC_0(VAR_12, VAR_0) == 0)
   VAR_9->prot_flags |= VAR_5;
 }

 if (VAR_11) {
  VAR_9->prot_flags |= VAR_7;

  if (FUNC_0(VAR_12, VAR_1))
   VAR_14 = 3 << 5;
  else
   VAR_14 = 1 << 5;
 }

 FUNC_2(VAR_9, VAR_13);
 FUNC_3(VAR_9, VAR_11);
 VAR_9->prot_flags &= FUNC_4(VAR_13);

 return VAR_14;
}

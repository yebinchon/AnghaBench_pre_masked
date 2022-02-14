
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct tag {int dummy; } ;
struct TYPE_2__ {int tagChecksum; int descCRCLength; int descCRC; } ;
struct logicalVolIntegrityDesc {TYPE_1__ descTag; int recordingDateAndTime; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct timespec64*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,struct timespec64) ;

__attribute__((used)) static void FUNC_6(struct logicalVolIntegrityDesc *VAR_0)
{
 struct timespec64 VAR_1;

 FUNC_2(&VAR_1);
 FUNC_5(&VAR_0->recordingDateAndTime, VAR_1);
 VAR_0->descTag.descCRC = FUNC_0(
  FUNC_1(0, (char *)VAR_0 + sizeof(struct tag),
   FUNC_3(VAR_0->descTag.descCRCLength)));
 VAR_0->descTag.tagChecksum = FUNC_4(&VAR_0->descTag);
}

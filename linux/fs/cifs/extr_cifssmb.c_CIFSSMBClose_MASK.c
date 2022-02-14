
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_closes; } ;
struct TYPE_6__ {TYPE_1__ cifs_stats; } ;
struct cifs_tcon {TYPE_2__ stats; int ses; } ;
typedef scalar_t__ __u16 ;
struct TYPE_7__ {int LastWriteTime; scalar_t__ ByteCount; scalar_t__ FileID; } ;
typedef TYPE_3__ CLOSE_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int const,int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_5(const unsigned int VAR_5, struct cifs_tcon *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 CLOSE_REQ *VAR_9 = ((void*)0);
 FUNC_1(VAR_2, "In CIFSSMBClose\n");


 VAR_8 = FUNC_4(VAR_3, 3, VAR_6, (void **) &VAR_9);
 if (VAR_8 == -VAR_0)
  return 0;
 if (VAR_8)
  return VAR_8;

 VAR_9->FileID = (__u16) VAR_7;
 VAR_9->LastWriteTime = 0xFFFFFFFF;
 VAR_9->ByteCount = 0;
 VAR_8 = FUNC_0(VAR_5, VAR_6->ses, (char *) VAR_9, 0);
 FUNC_2(VAR_9);
 FUNC_3(&VAR_6->stats.cifs_stats.num_closes);
 if (VAR_8) {
  if (VAR_8 != -VAR_1) {

   FUNC_1(VAR_4, "Send error in Close = %d\n", VAR_8);
  }
 }


 if (VAR_8 == -VAR_0)
  VAR_8 = 0;

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_flushes; } ;
struct TYPE_6__ {TYPE_1__ cifs_stats; } ;
struct cifs_tcon {TYPE_2__ stats; int ses; } ;
typedef scalar_t__ __u16 ;
struct TYPE_7__ {scalar_t__ ByteCount; scalar_t__ FileID; } ;
typedef TYPE_3__ FLUSH_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int const,int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_5(const unsigned int VAR_3, struct cifs_tcon *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 FLUSH_REQ *VAR_7 = ((void*)0);
 FUNC_1(VAR_0, "In CIFSSMBFlush\n");

 VAR_6 = FUNC_4(VAR_1, 1, VAR_4, (void **) &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7->FileID = (__u16) VAR_5;
 VAR_7->ByteCount = 0;
 VAR_6 = FUNC_0(VAR_3, VAR_4->ses, (char *) VAR_7, 0);
 FUNC_2(VAR_7);
 FUNC_3(&VAR_4->stats.cifs_stats.num_flushes);
 if (VAR_6)
  FUNC_1(VAR_2, "Send error in Flush = %d\n", VAR_6);

 return VAR_6;
}

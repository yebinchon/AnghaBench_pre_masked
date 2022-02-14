
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pstore_record {int count; int reason; unsigned int part; char* buf; int compressed; int size; int type; } ;
struct kmsg_dumper {int dummy; } ;
typedef enum kmsg_dump_reason { ____Placeholder_kmsg_dump_reason } kmsg_dump_reason ;
struct TYPE_3__ {char* buf; size_t bufsize; int (* write ) (struct pstore_record*) ;int buf_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 unsigned long VAR_4 ;
 int FUNC_5 (struct kmsg_dumper*,int,char*,size_t,size_t*) ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int,size_t) ;
 scalar_t__ FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 (struct pstore_record*,TYPE_1__*) ;
 int FUNC_11 (char*,size_t,char*,char const*,int,unsigned int) ;
 int FUNC_12 (struct pstore_record*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct kmsg_dumper *VAR_8,
   enum kmsg_dump_reason VAR_9)
{
 unsigned long VAR_10 = 0;
 const char *VAR_11;
 unsigned int VAR_12 = 1;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_9);

 if (FUNC_2(&VAR_6->buf_lock)) {

  if (FUNC_7(VAR_9)) {
   FUNC_6("dump skipped in %s path: may corrupt error record\n",
    FUNC_4() ? "NMI" : VAR_11);
   return;
  }
  if (FUNC_1(&VAR_6->buf_lock)) {
   FUNC_6("could not grab semaphore?!\n");
   return;
  }
 }

 VAR_5++;
 while (VAR_10 < VAR_4) {
  char *VAR_14;
  size_t VAR_15;
  int VAR_16;
  int VAR_17 = -1;
  size_t VAR_18;
  struct pstore_record VAR_19;

  FUNC_10(&VAR_19, VAR_6);
  VAR_19.type = VAR_1;
  VAR_19.count = VAR_5;
  VAR_19.reason = VAR_9;
  VAR_19.part = VAR_12;
  VAR_19.buf = VAR_6->buf;

  if (VAR_2) {
   VAR_14 = VAR_2;
   VAR_15 = VAR_3;
  } else {
   VAR_14 = VAR_6->buf;
   VAR_15 = VAR_6->bufsize;
  }


  VAR_16 = FUNC_11(VAR_14, VAR_15, "%s#%d Part%u\n", VAR_11,
     VAR_5, VAR_12);
  VAR_15 -= VAR_16;


  if (!FUNC_5(VAR_8, 1, VAR_14 + VAR_16,
       VAR_15, &VAR_18))
   break;

  if (VAR_2) {
   VAR_17 = FUNC_8(VAR_14, VAR_6->buf,
      VAR_16 + VAR_18,
      VAR_6->bufsize);

   if (VAR_17 > 0) {
    VAR_19.compressed = 1;
    VAR_19.size = VAR_17;
   } else {
    VAR_19.size = FUNC_0(VAR_16,
          VAR_18);
   }
  } else {
   VAR_19.size = VAR_16 + VAR_18;
  }

  VAR_13 = VAR_6->write(&VAR_19);
  if (VAR_13 == 0 && VAR_9 == VAR_0 && FUNC_9())
   VAR_7 = 1;

  VAR_10 += VAR_19.size;
  VAR_12++;
 }

 FUNC_13(&VAR_6->buf_lock);
}

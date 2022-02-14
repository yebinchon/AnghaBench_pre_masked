
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct ubifs_info {int leb_size; int pnode_sz; int nnode_sz; int ltab_sz; int lsave_sz; int big_lpt; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int offs; int lnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 void* FUNC_0 (int,int ,int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct ubifs_info const*,void*,int*) ;
 int FUNC_2 (struct ubifs_info const*,void*,int) ;
 int FUNC_3 (struct ubifs_info const*,void*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (struct ubifs_info const*,char*,...) ;
 int FUNC_7 (struct ubifs_info const*,int,void*,int ,int,int) ;
 int FUNC_8 (struct ubifs_info const*,void*,struct ubifs_nnode*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static void FUNC_10(const struct ubifs_info *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = VAR_4->leb_size, VAR_8, VAR_9, VAR_10, VAR_11;
 void *VAR_12, *VAR_13;

 FUNC_5("(pid %d) start dumping LEB %d\n", VAR_3->pid, VAR_5);
 VAR_12 = VAR_13 = FUNC_0(VAR_4->leb_size, VAR_0, VAR_1);
 if (!VAR_12) {
  FUNC_6(VAR_4, "cannot allocate memory to dump LPT");
  return;
 }

 VAR_6 = FUNC_7(VAR_4, VAR_5, VAR_12, 0, VAR_4->leb_size, 1);
 if (VAR_6)
  goto out;

 while (1) {
  VAR_11 = VAR_4->leb_size - VAR_7;
  if (!FUNC_3(VAR_4, VAR_13, VAR_7)) {
   int VAR_14;

   VAR_14 = FUNC_2(VAR_4, VAR_13, VAR_7);
   if (VAR_14) {
    FUNC_5("LEB %d:%d, pad %d bytes\n",
           VAR_5, VAR_11, VAR_14);
    VAR_13 += VAR_14;
    VAR_7 -= VAR_14;
    continue;
   }
   if (VAR_7)
    FUNC_5("LEB %d:%d, free %d bytes\n",
           VAR_5, VAR_11, VAR_7);
   break;
  }

  VAR_8 = FUNC_1(VAR_4, VAR_13, &VAR_9);
  switch (VAR_8) {
  case 128:
  {
   VAR_10 = VAR_4->pnode_sz;
   if (VAR_4->big_lpt)
    FUNC_5("LEB %d:%d, pnode num %d\n",
           VAR_5, VAR_11, VAR_9);
   else
    FUNC_5("LEB %d:%d, pnode\n", VAR_5, VAR_11);
   break;
  }
  case 129:
  {
   int VAR_15;
   struct ubifs_nnode VAR_16;

   VAR_10 = VAR_4->nnode_sz;
   if (VAR_4->big_lpt)
    FUNC_5("LEB %d:%d, nnode num %d, ",
           VAR_5, VAR_11, VAR_9);
   else
    FUNC_5("LEB %d:%d, nnode, ",
           VAR_5, VAR_11);
   VAR_6 = FUNC_8(VAR_4, VAR_13, &VAR_16);
   if (VAR_6) {
    FUNC_5("failed to unpack_node, error %d\n",
           VAR_6);
    break;
   }
   for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
    FUNC_4("%d:%d", VAR_16.nbranch[VAR_15].lnum,
           VAR_16.nbranch[VAR_15].offs);
    if (VAR_15 != VAR_2 - 1)
     FUNC_4(", ");
   }
   FUNC_4("\n");
   break;
  }
  case 130:
   VAR_10 = VAR_4->ltab_sz;
   FUNC_5("LEB %d:%d, ltab\n", VAR_5, VAR_11);
   break;
  case 131:
   VAR_10 = VAR_4->lsave_sz;
   FUNC_5("LEB %d:%d, lsave len\n", VAR_5, VAR_11);
   break;
  default:
   FUNC_6(VAR_4, "LPT node type %d not recognized", VAR_8);
   goto out;
  }

  VAR_13 += VAR_10;
  VAR_7 -= VAR_10;
 }

 FUNC_5("(pid %d) finish dumping LEB %d\n", VAR_3->pid, VAR_5);
out:
 FUNC_9(VAR_12);
 return;
}

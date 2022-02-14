
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char suffix; unsigned int prefix; } ;
struct TYPE_4__ {unsigned long fcode; TYPE_1__ hs; } ;
struct bsd_dict {int cptr; unsigned int codem1; TYPE_2__ f; } ;
struct bsd_db {unsigned int max_ent; unsigned int n_bits; int seqno; int bytes_out; int in_count; unsigned int maxmaxcode; int hsize; int uncomp_bytes; int unit; scalar_t__ debug; int comp_bytes; int uncomp_count; int comp_count; int hshift; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int ) ;
 unsigned long FUNC_1 (unsigned int,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct bsd_db*) ;
 int FUNC_6 (struct bsd_db*) ;
 struct bsd_dict* FUNC_7 (struct bsd_db*,int) ;
 int* FUNC_8 (struct bsd_db*,unsigned int) ;
 int FUNC_9 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_10 (void *VAR_7, unsigned char *VAR_8, int VAR_9,
      unsigned char *VAR_10, int VAR_11)
  {
    struct bsd_db *VAR_12;
    unsigned int VAR_13;
    unsigned long VAR_14;
    unsigned int VAR_15;
    unsigned int VAR_16;
    unsigned int VAR_17;
    struct bsd_dict *VAR_18;
    int VAR_19;
    int VAR_20;
    unsigned int VAR_21;
    unsigned int VAR_22;
    unsigned int VAR_23;
    unsigned char *VAR_24;
    unsigned char *VAR_25;
    int VAR_26;
    int VAR_27;
    int VAR_28;
    int VAR_29;
    int VAR_30;

    VAR_12 = (struct bsd_db *) VAR_7;
    VAR_13 = VAR_12->max_ent;
    VAR_14 = 0;
    VAR_15 = 32;
    VAR_16 = VAR_12->n_bits;
    VAR_17 = 32 - VAR_16;






    VAR_26 = FUNC_3 (VAR_8);
    VAR_27 = FUNC_4 (VAR_8);

    VAR_20 = (VAR_8[4] << 8) + VAR_8[5];

    VAR_8 += (VAR_6 + 2);
    VAR_28 = VAR_9 - (VAR_6 + 2);






    if (VAR_20 != VAR_12->seqno)
      {
 if (VAR_12->debug)
   {
     FUNC_9("bsd_decomp%d: bad sequence # %d, expected %d\n",
     VAR_12->unit, VAR_20, VAR_12->seqno - 1);
   }
 return VAR_3;
      }

    ++VAR_12->seqno;
    VAR_12->bytes_out += VAR_28;






    VAR_25 = VAR_10;
    *VAR_25++ = VAR_26;
    *VAR_25++ = VAR_27;
    *VAR_25++ = 0;

    VAR_22 = VAR_2;
    VAR_19 = 3;






    for (;;)
      {
 if (VAR_28-- <= 0)
   {
     VAR_12->in_count += (VAR_19 - 3);
     break;
   }







 VAR_15 -= 8;
 VAR_14 |= *VAR_8++ << VAR_15;
 if (VAR_17 < VAR_15)
   {
     continue;
   }

 VAR_21 = VAR_14 >> VAR_17;
 VAR_14 <<= VAR_16;
 VAR_15 += VAR_16;





 if (VAR_21 == VAR_2)
   {
     if (VAR_28 > 0)
       {
  if (VAR_12->debug)
    {
      FUNC_9("bsd_decomp%d: bad CLEAR\n", VAR_12->unit);
    }
  return VAR_4;
       }

     FUNC_6(VAR_12);
     break;
   }

 if ((VAR_21 > VAR_13 + 2) || (VAR_21 > VAR_12->maxmaxcode)
     || (VAR_21 > VAR_13 && VAR_22 == VAR_2))
   {
     if (VAR_12->debug)
       {
  FUNC_9("bsd_decomp%d: bad code 0x%x oldcode=0x%x ",
         VAR_12->unit, VAR_21, VAR_22);
  FUNC_9("max_ent=0x%x explen=%d seqno=%d\n",
         VAR_13, VAR_19, VAR_12->seqno);
       }
     return VAR_4;
   }


 if (VAR_21 > VAR_13)
   {
     VAR_23 = VAR_22;
     VAR_30 = 1;
   }
 else
   {
     VAR_23 = VAR_21;
     VAR_30 = 0;
   }

 VAR_29 = *(FUNC_8 (VAR_12, VAR_23));
 VAR_19 += VAR_29 + VAR_30;
 if (VAR_19 > VAR_11)
   {
     if (VAR_12->debug)
       {
  FUNC_9("bsd_decomp%d: ran out of mru\n", VAR_12->unit);




       }
     return VAR_4;
   }





 VAR_25 += VAR_29;
 VAR_24 = VAR_25;
 while (VAR_23 > VAR_5)
   {
     struct bsd_dict *VAR_31 = FUNC_7 (VAR_12, VAR_23);

     VAR_18 = FUNC_7 (VAR_12, VAR_31->cptr);
     *--VAR_24 = VAR_18->f.hs.suffix;
     VAR_23 = VAR_18->f.hs.prefix;
   }
 *--VAR_24 = VAR_23;
 if (VAR_30)
   {
     *VAR_25++ = VAR_23;
   }
 if (VAR_22 != VAR_2 && VAR_13 < VAR_12->maxmaxcode)
   {
     struct bsd_dict *VAR_32, *VAR_33;
     unsigned short *VAR_34, *VAR_35;
     unsigned long VAR_36;
     int VAR_37, VAR_38, VAR_39;

     VAR_36 = FUNC_1(VAR_22,VAR_23);
     VAR_37 = FUNC_0(VAR_22,VAR_23,VAR_12->hshift);
     VAR_18 = FUNC_7 (VAR_12, VAR_37);


     if (VAR_18->codem1 < VAR_13)
       {
  VAR_38 = (VAR_37 == 0) ? 1 : VAR_37;
  do
    {
      VAR_37 += VAR_38;
      if (VAR_37 >= VAR_12->hsize)
        {
   VAR_37 -= VAR_12->hsize;
        }
      VAR_18 = FUNC_7 (VAR_12, VAR_37);
    }
  while (VAR_18->codem1 < VAR_13);
       }






     VAR_32 = FUNC_7 (VAR_12, VAR_13 + 1);
     VAR_39 = VAR_32->cptr;
     VAR_33 = FUNC_7 (VAR_12, VAR_39);

     if (VAR_33->codem1 == VAR_13)
       {
  VAR_33->codem1 = VAR_0;
       }

     VAR_32->cptr = VAR_37;
     VAR_18->codem1 = VAR_13;
     VAR_18->f.fcode = VAR_36;
     VAR_12->max_ent = ++VAR_13;


     VAR_34 = FUNC_8 (VAR_12, VAR_13);
     VAR_35 = FUNC_8 (VAR_12, VAR_22);
     *VAR_34 = *VAR_35 + 1;


     if (VAR_13 >= FUNC_2(VAR_16) && VAR_13 < VAR_12->maxmaxcode)
       {
  VAR_12->n_bits = ++VAR_16;
  VAR_17 = 32-VAR_16;
       }
   }
 VAR_22 = VAR_21;
      }

    ++VAR_12->comp_count;
    ++VAR_12->uncomp_count;
    VAR_12->comp_bytes += VAR_9 - VAR_1 - VAR_6;
    VAR_12->uncomp_bytes += VAR_19;

    if (FUNC_5(VAR_12))
      {
 if (VAR_12->debug)
   {
     FUNC_9("bsd_decomp%d: peer should have cleared dictionary on %d\n",
     VAR_12->unit, VAR_12->seqno - 1);
   }
      }
    return VAR_19;
  }

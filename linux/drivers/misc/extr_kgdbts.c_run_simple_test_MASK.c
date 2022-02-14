
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t idx; TYPE_1__* tst; int name; scalar_t__ (* validate_put ) (char*) ;} ;
struct TYPE_3__ {char* get; char* put; int (* get_handler ) (char*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,size_t,...) ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (char*,size_t,char*) ;

__attribute__((used)) static int FUNC_5(int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 if (VAR_7) {



  if (VAR_5) {
   VAR_5 = 0;
   return '+';
  }



  if (VAR_2 == 0) {
   if (VAR_6.tst[VAR_6.idx].get_handler)
    VAR_6.tst[VAR_6.idx].get_handler(VAR_6.tst[VAR_6.idx].get);
   else
    FUNC_1(VAR_6.tst[VAR_6.idx].get);
  }

  if (VAR_1[VAR_2] == '\0') {
   FUNC_0("kgdbts: ERROR GET: EOB on '%s' at %i\n",
      VAR_6.name, VAR_6.idx);
   VAR_2 = 0;
   FUNC_1("D");
  }
  VAR_9 = VAR_1[VAR_2];
  VAR_2++;
  return VAR_9;
 }




 if (VAR_6.tst[VAR_6.idx].get[0] == '\0' && VAR_6.tst[VAR_6.idx].put[0] == '\0' &&
     !VAR_6.tst[VAR_6.idx].get_handler) {
  FUNC_0("kgdbts: ERROR: beyond end of test on"
      " '%s' line %i\n", VAR_6.name, VAR_6.idx);
  return 0;
 }

 if (VAR_4 >= VAR_0) {
  FUNC_0("kgdbts: ERROR: put buffer overflow on"
      " '%s' line %i\n", VAR_6.name, VAR_6.idx);
  VAR_4 = 0;
  return 0;
 }

 if (VAR_4 == 0 && VAR_8 != '$')
  return 0;

 VAR_3[VAR_4] = VAR_8;
 VAR_4++;


 if (VAR_4 > 3 && VAR_3[VAR_4 - 3] == '#') {
  if (VAR_4 >= VAR_0) {
   FUNC_0("kgdbts: ERROR: put buffer overflow on"
    " '%s' line %i\n", VAR_6.name, VAR_6.idx);
   VAR_4 = 0;
   return 0;
  }
  VAR_3[VAR_4] = '\0';
  FUNC_4("put%i: %s\n", VAR_6.idx, VAR_3);

  if (VAR_6.validate_put && VAR_6.validate_put(VAR_3)) {
   FUNC_0("kgdbts: ERROR PUT: end of test "
      "buffer on '%s' line %i expected %s got %s\n",
      VAR_6.name, VAR_6.idx, VAR_6.tst[VAR_6.idx].put, VAR_3);
  }
  VAR_6.idx++;
  VAR_4 = 0;
  VAR_2 = 0;
  VAR_5 = 1;
 }
 return 0;
}

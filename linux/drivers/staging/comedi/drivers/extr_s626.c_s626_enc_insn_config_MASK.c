
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_8 (struct comedi_device*,unsigned int) ;
 int FUNC_9 (struct comedi_device*,unsigned int,int) ;
 int FUNC_10 (struct comedi_device*,unsigned int,scalar_t__) ;
 int FUNC_11 (struct comedi_device*,unsigned int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_8,
    struct comedi_subdevice *VAR_9,
    struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = FUNC_0(VAR_10->chanspec);
 u16 VAR_13 =

  FUNC_6(VAR_7) |

  FUNC_5(VAR_5) |

  FUNC_4(VAR_4) |

  FUNC_3(VAR_3) |

  FUNC_2(VAR_2) |

  FUNC_1(VAR_1);


 u16 VAR_14 = VAR_6;
 u16 VAR_15 = VAR_0;



 FUNC_11(VAR_8, VAR_12, VAR_13, 1);
 FUNC_7(VAR_8, VAR_12, VAR_11[0]);
 FUNC_8(VAR_8, VAR_12);
 FUNC_10(VAR_8, VAR_12, VAR_14);
 FUNC_9(VAR_8, VAR_12, (VAR_15 != 0));

 return VAR_10->n;
}
